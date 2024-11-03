<?php

/*
 * Copyright (C) 2024 Guru Pannu <opnsense@gurupannu.com>
 * All rights reserved.
 *
 */

function adguardhome_services()
{
    global $config;

    $services = array();

    if (isset($config['OPNsense']['adguardhome']['general']['enabled']) && $config['OPNsense']['adguardhome']['general']['enabled'] == 1  && $config['OPNsense']['adguardhome']['general']['primarydns'] == 1) {
        $services[] = array(
            'dns_ports' => ['53'],
            'description' => gettext('NextDNS DNS'),
            'configd' => array(
                'restart' => array('adguardhome restart'),
                'start' => array('adguardhome start'),
                'stop' => array('adguardhome stop'),
            ),
            'name' => 'adguardhome',
            'pidfile' => '/var/run/adguardhome.pid',
        );
    }
    elseif (isset($config['OPNsense']['adguardhome']['general']['enabled']) && $config['OPNsense']['adguardhome']['general']['enabled'] == 1  && $config['OPNsense']['adguardhome']['general']['primarydns'] == 0) {
        $services[] = array(
            'description' => gettext('NextDNS DNS'),
            'configd' => array(
                'restart' => array('adguardhome restart'),
                'start' => array('adguardhome start'),
                'stop' => array('adguardhome stop'),
            ),
            'name' => 'nextdns',
            'pidfile' => '/var/run/adguardhome.pid',
        );
    }  

    return $services;
}
