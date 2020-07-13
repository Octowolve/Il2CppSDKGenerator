#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BROffScreenTeammateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BROffScreenTeammateInfo"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& TeamNumID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CardInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PlayerPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOwnerIsPsychosis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(BROffScreenTeammateInfo*))(Il2CppBase() + 0x2DA9CA0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BROffScreenTeammateInfo*))(Il2CppBase() + 0x2DA9D9C))(this);
	}
	template <typename T = bool> T IsOwnerIsPsychosis() {
		return ((T (*)(BROffScreenTeammateInfo*))(Il2CppBase() + 0x2DA9E4C))(this);
	}

};

}
