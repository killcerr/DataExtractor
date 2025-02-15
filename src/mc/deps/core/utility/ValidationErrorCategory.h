#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

class ValidationErrorCategory {
public:
    // prevent constructor by default
    ValidationErrorCategory& operator=(ValidationErrorCategory const &) = delete;
    ValidationErrorCategory(ValidationErrorCategory const &) = delete;
    ValidationErrorCategory() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?name@ValidationErrorCategory@ResourceUri@Util@@UEBAPEBDXZ
    virtual char const * name() const;

    // vIndex: 2, symbol: ?message@ValidationErrorCategory@ResourceUri@Util@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual std::string message(int32_t) const;

    // vIndex: 3, symbol: ?default_error_condition@error_category@std@@UEBA?AVerror_condition@2@H@Z
    virtual std::error_condition default_error_condition(int32_t) const;

    // vIndex: 4, symbol: ?equivalent@error_category@std@@UEBA_NHAEBVerror_condition@2@@Z
    virtual bool equivalent(int32_t, std::error_condition const &) const;

    // vIndex: 5, symbol: ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z
    virtual bool equivalent(std::error_code const &, int32_t) const;

    // symbol: ?get@ValidationErrorCategory@ResourceUri@Util@@SAAEBVerror_category@std@@XZ
    MCAPI static std::error_category const & get();

    // NOLINTEND

};

};
