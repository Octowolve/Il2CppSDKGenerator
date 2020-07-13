#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.APM {

class FrameProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.APM", "FrameProcessor"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(FrameProcessor*))(Il2CppBase() + 0x4514CBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FrameProcessor*))(Il2CppBase() + 0x4514CC0))(this);
	}

};

}
