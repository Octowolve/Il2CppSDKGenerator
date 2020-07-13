#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Components {

class IVolumeClientDetectorOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Components", "IVolumeClientDetectorOperation"));
	}


	template <typename T = bool> T Do(uintptr_t pCurDetector) {
		return ((T (*)(IVolumeClientDetectorOperation*, uintptr_t))(Il2CppBase() + 0x0))(this, pCurDetector);
	}

};

}
