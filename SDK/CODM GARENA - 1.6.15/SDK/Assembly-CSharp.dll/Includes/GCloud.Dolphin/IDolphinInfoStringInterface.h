#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class IDolphinInfoStringInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "IDolphinInfoStringInterface"));
	}


	template <typename T = Il2CppString*> T GetUpdateInfoString(uintptr_t curVersionStage, uintptr_t updatetype, uintptr_t isDownloading) {
		return ((T (*)(IDolphinInfoStringInterface*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, curVersionStage, updatetype, isDownloading);
	}

};

}
