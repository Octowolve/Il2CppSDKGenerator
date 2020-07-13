#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip {

class ITaggedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip", "ITaggedData"));
	}


	template <typename T = int16_t> T get_TagID() {
		return ((T (*)(ITaggedData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetData(Il2CppArray<uintptr_t>* data, int32_t offset, int32_t count) {
		return ((T (*)(ITaggedData*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, data, offset, count);
	}

};

}
