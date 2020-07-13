#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class IDolphinErrorStringInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "IDolphinErrorStringInterface"));
	}


	template <typename T = Il2CppString*> T GetUpdateErrorString(uintptr_t errortype) {
		return ((T (*)(IDolphinErrorStringInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, errortype);
	}

};

}
