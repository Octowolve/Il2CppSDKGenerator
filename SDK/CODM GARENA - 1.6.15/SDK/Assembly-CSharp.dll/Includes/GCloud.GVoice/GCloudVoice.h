#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.GVoice {

class GCloudVoice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.GVoice", "GCloudVoice"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetEngine() {
		return ((T (*)(void *))(Il2CppBase() + 0x45369A0))(0);
	}

};

}
