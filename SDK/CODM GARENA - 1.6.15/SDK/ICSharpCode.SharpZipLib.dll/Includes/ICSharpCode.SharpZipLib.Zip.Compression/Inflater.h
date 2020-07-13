#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class Inflater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "Inflater"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& CPLENS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CPLEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CPDIST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CPDEXT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& readAdler() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& neededBits() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& repLength() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& repDist() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& uncomprLen() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isLastBlock() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& totalOut() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& totalIn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& noHeader() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& input() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& outputWindow() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& dynHeader() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& litlenTree() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& distTree() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& adler() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T DecodeHeader() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A75CA4))(this);
	}
	template <typename T = bool> T DecodeDict() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A75F5C))(this);
	}
	template <typename T = bool> T DecodeHuffman() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A75FE4))(this);
	}
	template <typename T = bool> T DecodeChksum() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A76AA8))(this);
	}
	template <typename T = bool> T Decode() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A76FB4))(this);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(Inflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A77A5C))(this, buffer, index, count);
	}
	template <typename T = int32_t> T Inflate(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(Inflater*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A77CFC))(this, buffer, offset, count);
	}
	template <typename T = bool> T get_IsNeedingInput() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A78190))(this);
	}
	template <typename T = bool> T get_IsNeedingDictionary() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A781C8))(this);
	}
	template <typename T = bool> T get_IsFinished() {
		return ((T (*)(Inflater*))(Il2CppBase() + 0x4A77FF8))(this);
	}

};

}
