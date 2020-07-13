#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class CUAnimationEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "CUAnimationEvent"));
	}

	template <typename T = uintptr_t> T& eventType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& strValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& strValue2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& value1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& value2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& value3() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& vec() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& vec2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T CopyData(uintptr_t inSrc) {
		return ((T (*)(CUAnimationEvent*, uintptr_t))(Il2CppBase() + 0x370472C))(this, inSrc);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CUAnimationEvent*))(Il2CppBase() + 0x3704840))(this);
	}

};

}
