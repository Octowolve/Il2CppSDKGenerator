#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatTopMessageController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatTopMessageController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmotionButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmoticonInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReachChatCharacterLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInputChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A141C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A1426C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A1463C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A146E4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A14A50))(this);
	}
	template <typename T = void> T OnOkButtonClick() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A14D3C))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15440))(this);
	}
	template <typename T = void> T OnEmotionButtonClick() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A154F4))(this);
	}
	template <typename T = void> T OnEmoticonInput(uintptr_t msg) {
		return ((T (*)(ChatTopMessageController*, uintptr_t))(Il2CppBase() + 0x3A156B8))(this, msg);
	}
	template <typename T = void> T OnReachChatCharacterLimit() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A159FC))(this);
	}
	template <typename T = void> T OnInputChange() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15AA0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15BC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15BD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15BD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15BE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatTopMessageController*))(Il2CppBase() + 0x3A15BE8))(this);
	}

};

}
