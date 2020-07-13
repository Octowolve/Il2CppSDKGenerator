#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class AudioSourceRandomModeDefs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "AudioSourceRandomModeDefs"));
	}

	template <typename T = int32_t> static T& RandomDefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NoRepeatDefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayListDefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
