#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Interpreter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Interpreter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& program() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& program_start() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& text_end() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& group_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& match_min() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& qs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& scan_ptr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& repeat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& fast() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& stack() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& deep() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& marks() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& mark_start() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mark_end() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& groups() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = int32_t> T ReadProgramCount(int32_t ptr) {
		return ((T (*)(Interpreter*, int32_t))(Il2CppBase() + 0x4AD457C))(this, ptr);
	}
	template <typename T = uintptr_t> T Scan(uintptr_t regex, Il2CppString* text, int32_t start, int32_t end) {
		return ((T (*)(Interpreter*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4AD4608))(this, regex, text, start, end);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Interpreter*))(Il2CppBase() + 0x4AD6518))(this);
	}
	template <typename T = bool> T Eval(uintptr_t mode, uintptr_t ref_ptr, int32_t pc) {
		return ((T (*)(Interpreter*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4AD46F8))(this, mode, ref_ptr, pc);
	}
	template <typename T = bool> T EvalChar(uintptr_t mode, uintptr_t ptr, uintptr_t pc, bool multi) {
		return ((T (*)(Interpreter*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4AD7058))(this, mode, ptr, pc, multi);
	}
	template <typename T = bool> T TryMatch(uintptr_t ref_ptr, int32_t pc) {
		return ((T (*)(Interpreter*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD66C4))(this, ref_ptr, pc);
	}
	template <typename T = bool> T IsPosition(uintptr_t pos, int32_t ptr) {
		return ((T (*)(Interpreter*, uintptr_t, int32_t))(Il2CppBase() + 0x4AD6D48))(this, pos, ptr);
	}
	template <typename T = bool> T IsWordChar(char c) {
		return ((T (*)(Interpreter*, char))(Il2CppBase() + 0x4AD7C10))(this, c);
	}
	template <typename T = Il2CppString*> T GetString(int32_t pc) {
		return ((T (*)(Interpreter*, int32_t))(Il2CppBase() + 0x4AD67D4))(this, pc);
	}
	template <typename T = void> T Open(int32_t gid, int32_t ptr) {
		return ((T (*)(Interpreter*, int32_t, int32_t))(Il2CppBase() + 0x4AD7498))(this, gid, ptr);
	}
	template <typename T = void> T Close(int32_t gid, int32_t ptr) {
		return ((T (*)(Interpreter*, int32_t, int32_t))(Il2CppBase() + 0x4AD7598))(this, gid, ptr);
	}
	template <typename T = bool> T Balance(int32_t gid, int32_t balance_gid, bool capture, int32_t ptr) {
		return ((T (*)(Interpreter*, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x4AD760C))(this, gid, balance_gid, capture, ptr);
	}
	template <typename T = int32_t> T Checkpoint() {
		return ((T (*)(Interpreter*))(Il2CppBase() + 0x4AD77D0))(this);
	}
	template <typename T = void> T Backtrack(int32_t cp) {
		return ((T (*)(Interpreter*, int32_t))(Il2CppBase() + 0x4AD77E0))(this, cp);
	}
	template <typename T = void> T ResetGroups() {
		return ((T (*)(Interpreter*))(Il2CppBase() + 0x4AD6534))(this);
	}
	template <typename T = int32_t> T GetLastDefined(int32_t gid) {
		return ((T (*)(Interpreter*, int32_t))(Il2CppBase() + 0x4AD6F98))(this, gid);
	}
	template <typename T = int32_t> T CreateMark(int32_t previous) {
		return ((T (*)(Interpreter*, int32_t))(Il2CppBase() + 0x4AD7C20))(this, previous);
	}
	template <typename T = void> T GetGroupInfo(int32_t gid, uintptr_t* first_mark_index, uintptr_t* n_caps) {
		return ((T (*)(Interpreter*, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AD7D90))(this, gid, first_mark_index, n_caps);
	}
	template <typename T = void> T PopulateGroup(uintptr_t g, int32_t first_mark_index, int32_t n_caps) {
		return ((T (*)(Interpreter*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4AD7E80))(this, g, first_mark_index, n_caps);
	}
	template <typename T = uintptr_t> T GenerateMatch(uintptr_t regex) {
		return ((T (*)(Interpreter*, uintptr_t))(Il2CppBase() + 0x4AD60F0))(this, regex);
	}

};

}
