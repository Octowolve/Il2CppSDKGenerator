#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatCell"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Configure(Il2CppString* msg, uintptr_t cellType) {
		return ((T (*)(BRChatCell*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24E527C))(this, msg, cellType);
	}
	template <typename T = void> T Configure_1(uintptr_t msg) {
		return ((T (*)(BRChatCell*, uintptr_t))(Il2CppBase() + 0x24E54AC))(this, msg);
	}

};

}
