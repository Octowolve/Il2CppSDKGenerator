#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class DataReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "DataReader"));
	}

	template <typename T = uintptr_t> T& mDataReader() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Read() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastReaderError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = unsigned char> static T Read(uintptr_t dataReader, uint32_t fileId, uint64_t offset, Il2CppArray<uintptr_t>* buff, uintptr_t readlength) {
		return ((T (*)(void *, uintptr_t, uint32_t, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x49869F4))(0, dataReader, fileId, offset, buff, readlength);
	}
	template <typename T = uint32_t> static T GetLastReaderError(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4986AFC))(0, reader);
	}
	template <typename T = bool> T Read_1(uint32_t fileId, uint64_t offset, Il2CppArray<uintptr_t>* buff, uintptr_t readlength) {
		return ((T (*)(DataReader*, uint32_t, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4986BDC))(this, fileId, offset, buff, readlength);
	}
	template <typename T = uint32_t> T GetLastReaderError_1() {
		return ((T (*)(DataReader*))(Il2CppBase() + 0x4986D0C))(this);
	}

};

}
