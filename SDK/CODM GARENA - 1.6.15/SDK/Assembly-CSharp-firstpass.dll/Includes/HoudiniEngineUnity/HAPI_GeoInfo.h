#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIGeoInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_GeoInfo"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& nodeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isEditable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isTemplated() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& isDisplayGeo() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& hasGeoChanged() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& hasMaterialChanged() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pointGroupCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& primitiveGroupCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& partCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T getGroupCountByType(uintptr_t type) {
		return ((T (*)(HAPIGeoInfo*, uintptr_t))(Il2CppBase() + 0x4C600EC))(this, type);
	}

};

}
