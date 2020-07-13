#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class InflaterHuffmanTree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "InflaterHuffmanTree"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& tree() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& defLitLenTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defDistTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BuildTree(void* codeLengths) {
		return ((T (*)(InflaterHuffmanTree*, void*))(Il2CppBase() + 0x4A795E0))(this, codeLengths);
	}
	template <typename T = int32_t> T GetSymbol(uintptr_t input) {
		return ((T (*)(InflaterHuffmanTree*, uintptr_t))(Il2CppBase() + 0x4A76730))(this, input);
	}

};

}
