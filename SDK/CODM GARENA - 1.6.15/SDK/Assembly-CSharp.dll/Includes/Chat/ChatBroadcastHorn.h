#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatBroadcastHorn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatBroadcastHorn"));
	}

	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& LadderIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BRLadderIcon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TextHtml() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureHorn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideHornView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetContentWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ConfigureHorn(uintptr_t mode, uintptr_t picInfo) {
		return ((T (*)(ChatBroadcastHorn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D2638C))(this, mode, picInfo);
	}
	template <typename T = void> T HideHornView() {
		return ((T (*)(ChatBroadcastHorn*))(Il2CppBase() + 0x1D26674))(this);
	}
	template <typename T = float> T GetContentWidth() {
		return ((T (*)(ChatBroadcastHorn*))(Il2CppBase() + 0x1D26760))(this);
	}

};

}
