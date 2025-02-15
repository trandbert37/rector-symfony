<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Rector\Symfony\Rector\MethodCall\GetCurrencyBundleMethodCallsToIntlRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->rule(GetCurrencyBundleMethodCallsToIntlRector::class);
};
