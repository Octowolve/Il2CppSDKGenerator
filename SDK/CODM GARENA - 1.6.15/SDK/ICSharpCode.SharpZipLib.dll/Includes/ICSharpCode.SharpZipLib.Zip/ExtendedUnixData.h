#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ExtendedUnixData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ExtendedUnixData"));
	}

	template <typename T = uintptr_t> T& _flags() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _modificationTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _lastAccessTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _createTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int16_t> T get_TagID() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7C33C))(this);
	}
	template <typename T = void> T SetData(Il2CppArray<uintptr_t>* data, int32_t index, int32_t count) {
		return ((T (*)(ExtendedUnixData*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A7C344))(this, data, index, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetData() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7C9D4))(this);
	}
	template <typename T = uintptr_t> T get_ModificationTime() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7CFD8))(this);
	}
	template <typename T = uintptr_t> T get_AccessTime() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7CFE8))(this);
	}
	template <typename T = uintptr_t> T get_CreateTime() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7CFF8))(this);
	}
	template <typename T = uintptr_t> T get_Include() {
		return ((T (*)(ExtendedUnixData*))(Il2CppBase() + 0x4A7D008))(this);
	}

};

}
