#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class ICompiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "ICompiler"));
	}


	template <typename T = uintptr_t> T GetMachineFactory() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EmitFalse() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EmitTrue() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EmitCharacter(char c, bool negate, bool ignore, bool reverse) {
		return ((T (*)(ICompiler*, char, bool, bool, bool))(Il2CppBase() + 0x0))(this, c, negate, ignore, reverse);
	}
	template <typename T = void> T EmitCategory(uintptr_t cat, bool negate, bool reverse) {
		return ((T (*)(ICompiler*, uintptr_t, bool, bool))(Il2CppBase() + 0x0))(this, cat, negate, reverse);
	}
	template <typename T = void> T EmitNotCategory(uintptr_t cat, bool negate, bool reverse) {
		return ((T (*)(ICompiler*, uintptr_t, bool, bool))(Il2CppBase() + 0x0))(this, cat, negate, reverse);
	}
	template <typename T = void> T EmitRange(char lo, char hi, bool negate, bool ignore, bool reverse) {
		return ((T (*)(ICompiler*, char, char, bool, bool, bool))(Il2CppBase() + 0x0))(this, lo, hi, negate, ignore, reverse);
	}
	template <typename T = void> T EmitSet(char lo, uintptr_t set, bool negate, bool ignore, bool reverse) {
		return ((T (*)(ICompiler*, char, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x0))(this, lo, set, negate, ignore, reverse);
	}
	template <typename T = void> T EmitString(Il2CppString* str, bool ignore, bool reverse) {
		return ((T (*)(ICompiler*, Il2CppString*, bool, bool))(Il2CppBase() + 0x0))(this, str, ignore, reverse);
	}
	template <typename T = void> T EmitPosition(uintptr_t pos) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, pos);
	}
	template <typename T = void> T EmitOpen(int32_t gid) {
		return ((T (*)(ICompiler*, int32_t))(Il2CppBase() + 0x0))(this, gid);
	}
	template <typename T = void> T EmitClose(int32_t gid) {
		return ((T (*)(ICompiler*, int32_t))(Il2CppBase() + 0x0))(this, gid);
	}
	template <typename T = void> T EmitBalanceStart(int32_t gid, int32_t balance, bool capture, uintptr_t tail) {
		return ((T (*)(ICompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, gid, balance, capture, tail);
	}
	template <typename T = void> T EmitBalance() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EmitReference(int32_t gid, bool ignore, bool reverse) {
		return ((T (*)(ICompiler*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, gid, ignore, reverse);
	}
	template <typename T = void> T EmitIfDefined(int32_t gid, uintptr_t tail) {
		return ((T (*)(ICompiler*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, gid, tail);
	}
	template <typename T = void> T EmitSub(uintptr_t tail) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, tail);
	}
	template <typename T = void> T EmitTest(uintptr_t yes, uintptr_t tail) {
		return ((T (*)(ICompiler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, yes, tail);
	}
	template <typename T = void> T EmitBranch(uintptr_t next) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, next);
	}
	template <typename T = void> T EmitJump(uintptr_t target) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, target);
	}
	template <typename T = void> T EmitRepeat(int32_t min, int32_t max, bool lazy, uintptr_t until) {
		return ((T (*)(ICompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, min, max, lazy, until);
	}
	template <typename T = void> T EmitUntil(uintptr_t repeat) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, repeat);
	}
	template <typename T = void> T EmitIn(uintptr_t tail) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, tail);
	}
	template <typename T = void> T EmitInfo(int32_t count, int32_t min, int32_t max) {
		return ((T (*)(ICompiler*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x0))(this, count, min, max);
	}
	template <typename T = void> T EmitFastRepeat(int32_t min, int32_t max, bool lazy, uintptr_t tail) {
		return ((T (*)(ICompiler*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x0))(this, min, max, lazy, tail);
	}
	template <typename T = void> T EmitAnchor(bool reverse, int32_t offset, uintptr_t tail) {
		return ((T (*)(ICompiler*, bool, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, reverse, offset, tail);
	}
	template <typename T = void> T EmitBranchEnd() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EmitAlternationEnd() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T NewLink() {
		return ((T (*)(ICompiler*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ResolveLink(uintptr_t link) {
		return ((T (*)(ICompiler*, uintptr_t))(Il2CppBase() + 0x0))(this, link);
	}

};

}
