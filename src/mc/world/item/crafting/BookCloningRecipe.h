#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BookCloningRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    BookCloningRecipe& operator=(BookCloningRecipe const &) = delete;
    BookCloningRecipe(BookCloningRecipe const &) = delete;
    BookCloningRecipe() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?assemble@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const;

    // vIndex: 2, symbol: ?getCraftingSize@BookCloningRecipe@@UEBAHXZ
    virtual int32_t getCraftingSize() const;

    // vIndex: 3, symbol: ?getIngredient@BookCloningRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const & getIngredient(int32_t, int32_t) const;

    // vIndex: 4, symbol: ?getResultItem@BookCloningRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const & getResultItem() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: ?matches@BookCloningRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const;

    // vIndex: 7, symbol: ?size@BookCloningRecipe@@UEBAHXZ
    virtual int32_t size() const;

    // symbol: ??0BookCloningRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI BookCloningRecipe(std::string_view);

    // symbol: ??0BookCloningRecipe@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVUUID@mce@@@Z
    MCAPI BookCloningRecipe(std::string_view, class mce::UUID const &);

    // symbol: ?ID@BookCloningRecipe@@2VUUID@mce@@B
    MCAPI static class mce::UUID const ID;

    // NOLINTEND

};

