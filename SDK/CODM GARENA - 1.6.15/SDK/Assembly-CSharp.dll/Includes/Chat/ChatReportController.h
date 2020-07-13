#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatReportController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatReportController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FF8EC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FF990))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FFBD0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FFC78))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FFE18))(this);
	}
	template <typename T = void> T OnOkButtonClick() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x39FFF94))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A00048))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A000FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A00104))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A0010C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A00114))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatReportController*))(Il2CppBase() + 0x3A0011C))(this);
	}

};

}
