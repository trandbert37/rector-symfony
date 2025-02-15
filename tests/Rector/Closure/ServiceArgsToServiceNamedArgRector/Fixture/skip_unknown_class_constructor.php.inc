<?php

namespace Rector\Symfony\Tests\Rector\Closure\ServiceArgsToServiceNamedArgRector\Fixture;

use Rector\Symfony\Tests\Rector\Closure\ServiceArgsToServiceNamedArgRector\Source\AnotherClassWithoutConstructor;
use Symfony\Component\DependencyInjection\Loader\Configurator\ContainerConfigurator;

return static function (ContainerConfigurator $containerConfigurator): void {
    $services = $containerConfigurator->services();

    $services->set(AnotherClassWithoutConstructor::class)
        ->args(['some_value']);
};
