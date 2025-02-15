<?php

namespace Rector\Symfony\Tests\Rector\Closure\ServiceSettersToSettersAutodiscoveryRector\Fixture;

use Rector\Symfony\Tests\Rector\Closure\ServiceSettersToSettersAutodiscoveryRector\Source\FirstAutowiredClass;
use Symfony\Component\DependencyInjection\Loader\Configurator\ContainerConfigurator;

return static function (ContainerConfigurator $containerConfigurator): void {
    $services = $containerConfigurator->services();

    $services->set('extra_name', FirstAutowiredClass::class);
};
