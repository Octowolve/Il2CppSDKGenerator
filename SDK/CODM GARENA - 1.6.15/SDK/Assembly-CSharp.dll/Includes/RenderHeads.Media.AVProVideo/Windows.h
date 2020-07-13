#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Windows
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Windows"));
	}

	template <typename T = Il2CppString*> static T& AudioDeviceOutputName_Vive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AudioDeviceOutputName_Rift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
