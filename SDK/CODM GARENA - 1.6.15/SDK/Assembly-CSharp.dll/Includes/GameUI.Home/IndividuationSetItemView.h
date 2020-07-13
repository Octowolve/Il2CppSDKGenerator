#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Home {

class IndividuationSetItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Home", "IndividuationSetItemView"));
	}

	template <typename T = int32_t> T& MaxItemNum() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SetItemClickHandler() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& MaskBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ContainerTrans() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = int32_t> T& StartAngle() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& CalcRadius() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_CacheTwneer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ItemList() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IniatialInnerSetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSetItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllDataPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_CacheTwneer() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x2329324))(this);
	}
	template <typename T = uintptr_t> T IniatialInnerSetItem(uintptr_t go, int32_t index) {
		return ((T (*)(IndividuationSetItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x232940C))(this, go, index);
	}
	template <typename T = void> T OnSetItemClick(uintptr_t setItem) {
		return ((T (*)(IndividuationSetItemView*, uintptr_t))(Il2CppBase() + 0x2329A50))(this, setItem);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x2329C00))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x2329FA4))(this);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x2327D34))(this);
	}
	template <typename T = void> T ResetAllDataPos() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x232A0EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x232A358))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(IndividuationSetItemView*))(Il2CppBase() + 0x232A360))(this);
	}

};

}
