#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DialogHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DialogHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& _isPrinting() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _dialogContent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& _printInteral() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _showDuration() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& InvokeDoUnshow_Name() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LuaTriggerShowDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InvokeDoUnshow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForcePrintAllDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> T get_IsPrinting() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6274))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E627C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6374))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E637C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6388))(this);
	}
	template <typename T = void> T LuaTriggerShowDialog(Il2CppString* dataKey) {
		return ((T (*)(DialogHUD*, Il2CppString*))(Il2CppBase() + 0x46E6430))(this, dataKey);
	}
	template <typename T = void> T InvokeDoUnshow() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6C9C))(this);
	}
	template <typename T = void> T CloseDialog() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6E2C))(this);
	}
	template <typename T = void> T Show(uintptr_t conf) {
		return ((T (*)(DialogHUD*, uintptr_t))(Il2CppBase() + 0x46E669C))(this, conf);
	}
	template <typename T = uintptr_t> T PrintDialog(float displayInterval, Il2CppString* content) {
		return ((T (*)(DialogHUD*, float, Il2CppString*))(Il2CppBase() + 0x46E6ED0))(this, displayInterval, content);
	}
	template <typename T = bool> T ForcePrintAllDialog() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E65B4))(this);
	}
	template <typename T = void> T UnShow() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6D40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E6FEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E709C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E70A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(DialogHUD*))(Il2CppBase() + 0x46E70AC))(this);
	}

};

}
