#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPITimelineOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_TimelineOptions"));
	}

	template <typename T = float> T& fps() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& endTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
