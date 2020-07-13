#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Wup.Jce {

class JceDisplayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "Wup.Jce", "JceDisplayer"));
	}

	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T ps(Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppString*))(Il2CppBase() + 0x4F890C4))(this, fieldName);
	}
	template <typename T = uintptr_t> T Display(bool b, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, bool, Il2CppString*))(Il2CppBase() + 0x4F891B8))(this, b, fieldName);
	}
	template <typename T = uintptr_t> T Display_1(unsigned char n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, unsigned char, Il2CppString*))(Il2CppBase() + 0x4F89218))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_2(char n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, char, Il2CppString*))(Il2CppBase() + 0x4F89270))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_3(int16_t n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, int16_t, Il2CppString*))(Il2CppBase() + 0x4F892C8))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_4(int32_t n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, int32_t, Il2CppString*))(Il2CppBase() + 0x4F89320))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_5(int64_t n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, int64_t, Il2CppString*))(Il2CppBase() + 0x4F89378))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_6(float n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, float, Il2CppString*))(Il2CppBase() + 0x4F893E4))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_7(double n, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, double, Il2CppString*))(Il2CppBase() + 0x4F8943C))(this, n, fieldName);
	}
	template <typename T = uintptr_t> T Display_8(Il2CppString* s, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4F894A8))(this, s, fieldName);
	}
	template <typename T = uintptr_t> T Display_9(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F89580))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_10(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F8976C))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_11(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F89958))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_12(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F89B44))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_13(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F89D30))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_14(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F89F2C))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_15(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4F8A118))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_16(Il2CppDictionary<uintptr_t, uintptr_t>* m, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppDictionary<uintptr_t, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4E5A344))(this, m, fieldName);
	}
	template <typename T = uintptr_t> T Display_17(Il2CppArray<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4E59FE4))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_18(Il2CppList<uintptr_t>* v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, Il2CppList<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x4E5A1F4))(this, v, fieldName);
	}
	template <typename T = uintptr_t> T Display_19(uintptr_t o, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4E5A78C))(this, o, fieldName);
	}
	template <typename T = uintptr_t> T Display_20(uintptr_t v, Il2CppString* fieldName) {
		return ((T (*)(JceDisplayer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4F8A318))(this, v, fieldName);
	}

};

}
