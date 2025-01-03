<?php

/*
 * Copyright (C) 2025 Guru Pannu <opnsense@gurupannu.com>
 * All rights reserved.
 */

namespace OPNsense\adguardhome\Api;

use OPNsense\Base\ApiMutableServiceControllerBase;

class ServiceController extends ApiMutableServiceControllerBase
{
    protected static $internalServiceClass = '\OPNsense\adguardhome\General';
    protected static $internalServiceTemplate = 'OPNsense/adguardhome';
    protected static $internalServiceEnabled = 'enabled';
    protected static $internalServiceName = 'adguardhome';
}
