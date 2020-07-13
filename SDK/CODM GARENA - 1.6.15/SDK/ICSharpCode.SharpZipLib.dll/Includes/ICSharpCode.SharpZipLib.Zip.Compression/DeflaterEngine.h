#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ICSharpCode.SharpZipLib.Zip.Compression {

class DeflaterEngine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterEngine"));
	}

	template <typename T = int32_t> T& ins_h() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& head() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& prev() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& matchStart() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& matchLen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& prevAvailable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& blockStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& strstart() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& lookahead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& window() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& strategy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& max_chain() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& max_lazy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& niceLength() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& goodLength() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& compressionFunction() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& inputBuf() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& totalIn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& inputOff() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& inputEnd() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& pending() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& huffman() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& adler() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T Deflate(bool flush, bool finish) {
		return ((T (*)(DeflaterEngine*, bool, bool))(Il2CppBase() + 0x4A70844))(this, flush, finish);
	}
	template <typename T = void> T SetInput(Il2CppArray<uintptr_t>* buffer, int32_t offset, int32_t count) {
		return ((T (*)(DeflaterEngine*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4A6FD8C))(this, buffer, offset, count);
	}
	template <typename T = bool> T NeedsInput() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A6FC7C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A6FAD8))(this);
	}
	template <typename T = void> T ResetAdler() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A70738))(this);
	}
	template <typename T = int32_t> T get_Adler() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A70724))(this);
	}
	template <typename T = void> T set_Strategy(uintptr_t value) {
		return ((T (*)(DeflaterEngine*, uintptr_t))(Il2CppBase() + 0x4A70360))(this, value);
	}
	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(DeflaterEngine*, int32_t))(Il2CppBase() + 0x4A6FF58))(this, level);
	}
	template <typename T = void> T FillWindow() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A70E8C))(this);
	}
	template <typename T = void> T UpdateHash() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A71890))(this);
	}
	template <typename T = int32_t> T InsertString() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A720A0))(this);
	}
	template <typename T = void> T SlideWindow() {
		return ((T (*)(DeflaterEngine*))(Il2CppBase() + 0x4A71F3C))(this);
	}
	template <typename T = bool> T FindLongestMatch(int32_t curMatch) {
		return ((T (*)(DeflaterEngine*, int32_t))(Il2CppBase() + 0x4A72188))(this, curMatch);
	}
	template <typename T = bool> T DeflateStored(bool flush, bool finish) {
		return ((T (*)(DeflaterEngine*, bool, bool))(Il2CppBase() + 0x4A70FFC))(this, flush, finish);
	}
	template <typename T = bool> T DeflateFast(bool flush, bool finish) {
		return ((T (*)(DeflaterEngine*, bool, bool))(Il2CppBase() + 0x4A711F8))(this, flush, finish);
	}
	template <typename T = bool> T DeflateSlow(bool flush, bool finish) {
		return ((T (*)(DeflaterEngine*, bool, bool))(Il2CppBase() + 0x4A71474))(this, flush, finish);
	}

};

}
