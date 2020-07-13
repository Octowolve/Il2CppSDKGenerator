#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseOneShotSound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseOneShotSound"));
	}

	template <typename T = uint64_t> T& mNextIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& mOSSHandles() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mListUsedHandles() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& OSSGO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& pTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WWiseOneShotSound*))(Il2CppBase() + 0x4502FD0))(this);
	}
	template <typename T = void> T PlayOneShot(Il2CppString* strEventName, Il2CppVector3 vecPos, bool byPassRangeCheck) {
		return ((T (*)(WWiseOneShotSound*, Il2CppString*, Il2CppVector3, bool))(Il2CppBase() + 0x45031C0))(this, strEventName, vecPos, byPassRangeCheck);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WWiseOneShotSound*))(Il2CppBase() + 0x450379C))(this);
	}
	template <typename T = void> T ClearCache() {
		return ((T (*)(WWiseOneShotSound*))(Il2CppBase() + 0x4503920))(this);
	}

};

}
