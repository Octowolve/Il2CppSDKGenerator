#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HAPIPartInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HAPI_PartInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& nameSH() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& faceCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& vertexCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& pointCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attributeCounts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isInstanced() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& instancedPartCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& instanceCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T getElementCountByAttributeOwner(uintptr_t owner) {
		return ((T (*)(HAPIPartInfo*, uintptr_t))(Il2CppBase() + 0x4C603EC))(this, owner);
	}
	template <typename T = int32_t> T getElementCountByGroupType(uintptr_t type) {
		return ((T (*)(HAPIPartInfo*, uintptr_t))(Il2CppBase() + 0x4C60464))(this, type);
	}
	template <typename T = void> T init() {
		return ((T (*)(HAPIPartInfo*))(Il2CppBase() + 0x4C60528))(this);
	}
	template <typename T = int32_t> T get_pointAttributeCount() {
		return ((T (*)(HAPIPartInfo*))(Il2CppBase() + 0x4C60574))(this);
	}
	template <typename T = void> T set_pointAttributeCount(int32_t value) {
		return ((T (*)(HAPIPartInfo*, int32_t))(Il2CppBase() + 0x4C605C4))(this, value);
	}
	template <typename T = int32_t> T get_primitiveAttributeCount() {
		return ((T (*)(HAPIPartInfo*))(Il2CppBase() + 0x4C60610))(this);
	}
	template <typename T = void> T set_primitiveAttributeCount(int32_t value) {
		return ((T (*)(HAPIPartInfo*, int32_t))(Il2CppBase() + 0x4C60660))(this, value);
	}
	template <typename T = int32_t> T get_vertexAttributeCount() {
		return ((T (*)(HAPIPartInfo*))(Il2CppBase() + 0x4C606AC))(this);
	}
	template <typename T = void> T set_vertexAttributeCount(int32_t value) {
		return ((T (*)(HAPIPartInfo*, int32_t))(Il2CppBase() + 0x4C606FC))(this, value);
	}
	template <typename T = int32_t> T get_detailAttributeCount() {
		return ((T (*)(HAPIPartInfo*))(Il2CppBase() + 0x4C60748))(this);
	}
	template <typename T = void> T set_detailAttributeCount(int32_t value) {
		return ((T (*)(HAPIPartInfo*, int32_t))(Il2CppBase() + 0x4C60798))(this, value);
	}

};

}
