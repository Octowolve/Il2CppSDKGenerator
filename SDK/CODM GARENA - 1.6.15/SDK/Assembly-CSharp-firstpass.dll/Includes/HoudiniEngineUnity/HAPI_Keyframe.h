#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIKeyframe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_Keyframe"));
	}

	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& inTangent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& outTangent() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
