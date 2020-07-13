#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Resources {

class ResourceReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Resources", "ResourceReader"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& readerLock() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& formatter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& resourceCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& typeCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& typeNames() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hashes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& infos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& dataSectionOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& nameSectionOffset() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& resource_ver() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cache() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& cache_lock() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDBAE8))(this);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDBBC4))(this);
	}
	template <typename T = void> T ReadHeaders() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDABB4))(this);
	}
	template <typename T = void> T CreateResourceInfo(int64_t position, uintptr_t info) {
		return ((T (*)(ResourceReader*, int64_t, uintptr_t))(Il2CppBase() + 0x4FDBC54))(this, position, info);
	}
	template <typename T = int32_t> T Read7BitEncodedInt() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDBEA8))(this);
	}
	template <typename T = uintptr_t> T ReadValueVer2(int32_t type_index) {
		return ((T (*)(ResourceReader*, int32_t))(Il2CppBase() + 0x4FDBF04))(this, type_index);
	}
	template <typename T = uintptr_t> T ReadValueVer1(uintptr_t type) {
		return ((T (*)(ResourceReader*, uintptr_t))(Il2CppBase() + 0x4FDC7F4))(this, type);
	}
	template <typename T = uintptr_t> T ReadNonPredefinedValue(uintptr_t exp_type) {
		return ((T (*)(ResourceReader*, uintptr_t))(Il2CppBase() + 0x4FDC668))(this, exp_type);
	}
	template <typename T = void> T LoadResourceValues(Il2CppArray<uintptr_t>* store) {
		return ((T (*)(ResourceReader*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4FDD1C0))(this, store);
	}
	template <typename T = void> T Close() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDD50C))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(ResourceReader*))(Il2CppBase() + 0x4FDD550))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(ResourceReader*, bool))(Il2CppBase() + 0x4FDBC08))(this, disposing);
	}

};

}
