#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SequenceEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SequenceEvent"));
	}

	template <typename T = float> T& triggerTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& fxParent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& triggerEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& nParam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& stParam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& showCamera() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& animtor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& elapsedTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& Played() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
