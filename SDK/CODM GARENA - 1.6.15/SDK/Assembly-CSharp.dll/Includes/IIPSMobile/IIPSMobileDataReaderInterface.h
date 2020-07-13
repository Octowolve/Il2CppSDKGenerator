#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDataReaderInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDataReaderInterface"));
	}


	template <typename T = bool> T Read(uint32_t fileId, uint64_t offset, Il2CppArray<uintptr_t>* buff, uintptr_t readlength) {
		return ((T (*)(IIPSMobileDataReaderInterface*, uint32_t, uint64_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, fileId, offset, buff, readlength);
	}
	template <typename T = uint32_t> T GetLastReaderError() {
		return ((T (*)(IIPSMobileDataReaderInterface*))(Il2CppBase() + 0x0))(this);
	}

};

}
