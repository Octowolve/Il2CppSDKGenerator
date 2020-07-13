#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMSecretMessageHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMSecretMessageHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Pairs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TapContinue() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _isPrinting() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& _dialogContent() {
		return *(T*)((uintptr_t)this + 0x94);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPicRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContinueClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForcePrintAllDialog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A6192C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A61A24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A61B38))(this);
	}
	template <typename T = void> T ShowMessage(Il2CppString* picKey, Il2CppString* title, Il2CppString* content, bool bPrinter) {
		return ((T (*)(ZMSecretMessageHUD*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2A61BE0))(this, picKey, title, content, bPrinter);
	}
	template <typename T = void> T ShowPicRoot(Il2CppString* picKey) {
		return ((T (*)(ZMSecretMessageHUD*, Il2CppString*))(Il2CppBase() + 0x2A61CCC))(this, picKey);
	}
	template <typename T = void> T SetText(Il2CppString* title, Il2CppString* content, bool bPrinter) {
		return ((T (*)(ZMSecretMessageHUD*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2A61E9C))(this, title, content, bPrinter);
	}
	template <typename T = void> T ContinueClose(uintptr_t obj) {
		return ((T (*)(ZMSecretMessageHUD*, uintptr_t))(Il2CppBase() + 0x2A62230))(this, obj);
	}
	template <typename T = uintptr_t> T PrintDialog(float displayInterval, Il2CppString* content) {
		return ((T (*)(ZMSecretMessageHUD*, float, Il2CppString*))(Il2CppBase() + 0x2A6211C))(this, displayInterval, content);
	}
	template <typename T = bool> T ForcePrintAllDialog() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A6233C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A6242C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A62434))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMSecretMessageHUD*))(Il2CppBase() + 0x2A6243C))(this);
	}

};

}
