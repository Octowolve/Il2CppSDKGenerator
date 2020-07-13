#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ZipEntryFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ZipEntryFactory"));
	}

	template <typename T = uintptr_t> T& nameTransform_() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& fixedDateTime_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isUnicodeText_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& getAttributes_() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
