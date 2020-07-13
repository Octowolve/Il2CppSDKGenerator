#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPICurveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_CurveInfo"));
	}

	template <typename T = uintptr_t> T& curveType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& curveCount() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& vertexCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& knotCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isPeriodic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isRational() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasKnots() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
