<?php

/*
 * Copyright (C) 2024 Guru Pannu <opnsense@gurupannu.com>
 * All rights reserved.
 */

namespace OPNsense\ControlD\Api;

use OPNsense\Base\ApiMutableServiceControllerBase;

class ServiceController extends ApiMutableServiceControllerBase
{
    protected static $internalServiceClass = '\OPNsense\ControlD\General';
    protected static $internalServiceTemplate = 'OPNsense/ControlD';
    protected static $internalServiceEnabled = 'enabled';
    protected static $internalServiceName = 'controld';
}
