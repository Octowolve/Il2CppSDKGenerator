#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPICookOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_CookOptions"));
	}

	template <typename T = bool> T& splitGeosByGroup() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& maxVerticesPerPrimitive() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& refineCurveToLinear() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& curveRefineLOD() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& clearErrorsAndWarnings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& cookTemplatedGeos() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& splitPointsByVertexAttributes() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> T& packedPrimInstancingMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& handleBoxPartTypes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& handleSpherePartTypes() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& extraFlags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
