#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPersonalControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPersonalController_En"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplateGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnTemplateCliamClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x35125E8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x35126F4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3512798))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3512978))(this);
	}
	template <typename T = void> T _OnBtnTemplateGoClick() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3512AF4))(this);
	}
	template <typename T = void> T _OnBtnTemplateCliamClick() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3512DC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3513004))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x351300C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x3513014))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsPersonalControllerEn*))(Il2CppBase() + 0x351301C))(this);
	}

};

}
