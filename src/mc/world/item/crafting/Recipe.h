#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Recipe {
public:
    // prevent constructor by default
    Recipe& operator=(Recipe const &) = delete;
    Recipe(Recipe const &) = delete;
    Recipe() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?assemble@ShulkerBoxRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@AEAVCraftingContext@@@Z
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &, class CraftingContext &) const = 0;

    // vIndex: 2, symbol: ?getCraftingSize@BannerAddPatternRecipe@@UEBAHXZ
    virtual int32_t getCraftingSize() const = 0;

    // vIndex: 3, symbol: ?getIngredient@ShapelessRecipe@@UEBAAEBVRecipeIngredient@@HH@Z
    virtual class RecipeIngredient const & getIngredient(int32_t, int32_t) const = 0;

    // vIndex: 4, symbol: ?getResultItem@ShapelessRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@XZ
    virtual std::vector<class ItemInstance> const & getResultItem() const = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: ?matches@ShapedChemistryRecipe@@UEBA_NAEBVCraftingContainer@@AEBVCraftingContext@@@Z
    virtual bool matches(class CraftingContainer const &, class CraftingContext const &) const = 0;

    // vIndex: 7, symbol: ?size@BannerAddPatternRecipe@@UEBAHXZ
    virtual int32_t size() const = 0;

    // vIndex: 8, symbol: ?getId@Recipe@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const & getId() const;

    // vIndex: 9, symbol: ?isMultiRecipe@Recipe@@UEBA_NXZ
    virtual bool isMultiRecipe() const;

    // vIndex: 10, symbol: ?hasDataDrivenResult@Recipe@@UEBA_NXZ
    virtual bool hasDataDrivenResult() const;

    // vIndex: 11, symbol: ?itemValidForRecipe@Recipe@@UEBA_NAEBVItemDescriptor@@AEBVItemStack@@@Z
    virtual bool itemValidForRecipe(class ItemDescriptor const &, class ItemStack const &) const;

    // vIndex: 12, symbol: ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0@Z
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;

    // vIndex: 13, symbol: ?itemsMatch@Recipe@@UEBA_NAEBVItemDescriptor@@0PEBVCompoundTag@@@Z
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &, class CompoundTag const *) const;

    // vIndex: 14, symbol: ?getIngredientsHash@Recipe@@UEBA_KXZ
    virtual uint64_t getIngredientsHash() const;

    // vIndex: 15, symbol: ?loadResultList@Recipe@@UEBAXAEBVBlockPalette@@@Z
    virtual void loadResultList(class BlockPalette const &) const;

    // symbol: ??1Recipe@@UEAA@XZ
    MCVAPI ~Recipe();

    // symbol: ?countQuantityOfIngredient@Recipe@@QEBAHAEBVItemInstance@@@Z
    MCAPI int32_t countQuantityOfIngredient(class ItemInstance const &) const;

    // symbol: ?getHeight@Recipe@@QEBAHXZ
    MCAPI int32_t getHeight() const;

    // symbol: ?getIngredients@Recipe@@QEBAAEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@XZ
    MCAPI std::vector<class RecipeIngredient> const & getIngredients() const;

    // symbol: ?getNetId@Recipe@@QEBAAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@XZ
    MCAPI class TypedServerNetId<struct RecipeNetIdTag, uint32_t, 0> const & getNetId() const;

    // symbol: ?getPriority@Recipe@@QEBAHXZ
    MCAPI int32_t getPriority() const;

    // symbol: ?getRecipeId@Recipe@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRecipeId() const;

    // symbol: ?getTag@Recipe@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const & getTag() const;

    // symbol: ?getUnlockingRequirement@Recipe@@QEBAAEBVRecipeUnlockingRequirement@@XZ
    MCAPI class RecipeUnlockingRequirement const & getUnlockingRequirement() const;

    // symbol: ?getWidth@Recipe@@QEBAHXZ
    MCAPI int32_t getWidth() const;

    // symbol: ?setNetId@Recipe@@QEAAXAEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI void setNetId(class TypedServerNetId<struct RecipeNetIdTag, uint32_t, 0> const &);

    // symbol: ?isAnyAuxValue@Recipe@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isAnyAuxValue(class ItemDescriptor const &);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0Recipe@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@VHashedString@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@2@V?$optional@VRecipeUnlockingRequirement@@@2@VSemVersion@@@Z
    MCAPI Recipe(std::string_view, class HashedString, std::vector<class RecipeIngredient> const &, std::optional<class RecipeUnlockingRequirement>, class SemVersion);

    // NOLINTEND

};

