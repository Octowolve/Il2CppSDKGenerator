#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Emoji {

class EmoticonSelectItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Emoji", "EmoticonSelectItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mCacheConfig() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC064))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC108))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC214))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC35C))(this);
	}
	template <typename T = void> T OnEmoticonBtnClick(uintptr_t obj) {
		return ((T (*)(EmoticonSelectItemController*, uintptr_t))(Il2CppBase() + 0x4BCC46C))(this, obj);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(EmoticonSelectItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4BCC6F4))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC944))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC94C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(EmoticonSelectItemController*))(Il2CppBase() + 0x4BCC95C))(this);
	}

};

}
