#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PostCaptureSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "PostCaptureSettings"));
	}

	template <typename T = bool> T& writeFastStartStreamingForMp4() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
