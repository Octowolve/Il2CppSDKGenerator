#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression.Streams {

class InflaterInputBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "InflaterInputBuffer"));
	}

	template <typename T = int32_t> T& rawLength() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rawData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& clearTextLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& clearText() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& available() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cryptoTransform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& inputStream() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_Available() {
		return ((T (*)(InflaterInputBuffer*))(Il2CppBase() + 0x4A7B4C4))(this);
	}
	template <typename T = void> T SetInflaterInput(uintptr_t inflater) {
		return ((T (*)(InflaterInputBuffer*, uintptr_t))(Il2CppBase() + 0x4A7B4CC))(this, inflater);
	}
	template <typename T = void> T Fill() {
		return ((T (*)(InflaterInputBuffer*))(Il2CppBase() + 0x4A7B524))(this);
	}

};

}
