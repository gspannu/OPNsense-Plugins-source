<?php

/*
 * Copyright (C) 2024 Guru Pannu <opnsense@gurupannu.com>
 * All rights reserved.
 *
 */

function controld_services()
{
    global $config;

    $services = array();

    if (isset($config['OPNsense']['controld']['general']['enabled']) && $config['OPNsense']['controld']['general']['enabled'] == 1  && $config['OPNsense']['controld']['general']['primarydns'] == 1) {
        $services[] = array(
            'dns_ports' => ['53'],
            'description' => gettext('ControlD DNS'),
            'configd' => array(
                'restart' => array('controld restart'),
                'start' => array('controld start'),
                'stop' => array('controld stop'),
            ),
            'name' => 'controld',
            'pidfile' => '/var/run/controld.pid',
        );
    }
    elseif (isset($config['OPNsense']['controld']['general']['enabled']) && $config['OPNsense']['controld']['general']['enabled'] == 1  && $config['OPNsense']['controld']['general']['primarydns'] == 0) {
        $services[] = array(
            'description' => gettext('ControlD DNS'),
            'configd' => array(
                'restart' => array('controld restart'),
                'start' => array('controld start'),
                'stop' => array('controld stop'),
            ),
            'name' => 'blocky',
            'pidfile' => '/var/run/controld.pid',
        );
    }  

    return $services;
}
