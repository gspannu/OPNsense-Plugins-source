<?php

/*
 * Copyright (C) 2024 Guru Pannu <opnsense@gurupannu.com>
 * All rights reserved.
 */

namespace OPNsense\ctrld;

class GeneralController extends \OPNsense\Base\IndexController
{
    public function indexAction()
    {
        $this->view->generalForm = $this->getForm('general');
        $this->view->pick('OPNsense/ctrld/general');
    }
}
