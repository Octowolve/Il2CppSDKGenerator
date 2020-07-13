#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Ambient3DSoundBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Ambient3DSoundBase"));
	}

	template <typename T = bool> T& PlayInLowQuality() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& PlayInMediaQuality() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& PlayInHighQuality() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = Il2CppString*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mAudioPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(Ambient3DSoundBase*))(Il2CppBase() + 0x22B3B9C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Ambient3DSoundBase*))(Il2CppBase() + 0x22B3D78))(this);
	}

};

}
