#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Tree
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "Tree"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& freqs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& minNumCodes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numCodes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& codes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bl_counts() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& dh() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Tree*))(Il2CppBase() + 0x4A73AD4))(this);
	}
	template <typename T = void> T WriteSymbol(int32_t code) {
		return ((T (*)(Tree*, int32_t))(Il2CppBase() + 0x4A74500))(this, code);
	}
	template <typename T = void> T SetStaticCodes(Il2CppArray<uintptr_t>* staticCodes, Il2CppArray<uintptr_t>* staticLengths) {
		return ((T (*)(Tree*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A7543C))(this, staticCodes, staticLengths);
	}
	template <typename T = void> T BuildCodes() {
		return ((T (*)(Tree*))(Il2CppBase() + 0x4A73D6C))(this);
	}
	template <typename T = void> T BuildTree() {
		return ((T (*)(Tree*))(Il2CppBase() + 0x4A74680))(this);
	}
	template <typename T = int32_t> T GetEncodedLength() {
		return ((T (*)(Tree*))(Il2CppBase() + 0x4A753A0))(this);
	}
	template <typename T = void> T CalcBLFreq(uintptr_t blTree) {
		return ((T (*)(Tree*, uintptr_t))(Il2CppBase() + 0x4A75150))(this, blTree);
	}
	template <typename T = void> T WriteTree(uintptr_t blTree) {
		return ((T (*)(Tree*, uintptr_t))(Il2CppBase() + 0x4A74024))(this, blTree);
	}
	template <typename T = void> T BuildLength(Il2CppArray<uintptr_t>* childs) {
		return ((T (*)(Tree*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A75448))(this, childs);
	}

};

}
