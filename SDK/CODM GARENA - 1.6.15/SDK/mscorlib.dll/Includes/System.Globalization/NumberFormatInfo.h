#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class NumberFormatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "NumberFormatInfo"));
	}

	template <typename T = bool> T& isReadOnly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& decimalFormats() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& currencyFormats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& percentFormats() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& digitPattern() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& zeroPattern() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& currencyDecimalDigits() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& currencyDecimalSeparator() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& currencyGroupSeparator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& currencyGroupSizes() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& currencyNegativePattern() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& currencyPositivePattern() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& currencySymbol() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& nanSymbol() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& negativeInfinitySymbol() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& negativeSign() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& numberDecimalDigits() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& numberDecimalSeparator() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& numberGroupSeparator() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& numberGroupSizes() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& numberNegativePattern() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& percentDecimalDigits() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& percentDecimalSeparator() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& percentGroupSeparator() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& percentGroupSizes() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& percentNegativePattern() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& percentPositivePattern() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& percentSymbol() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& perMilleSymbol() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& positiveInfinitySymbol() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& positiveSign() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& ansiCurrencySymbol() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_dataItem() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_useUserOverride() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& validForParseAsNumber() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& validForParseAsCurrency() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& nativeDigits() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& digitSubstitution() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& invariantNativeDigits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_CurrencyDecimalDigits() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5B4))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencyDecimalSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5BC))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencyGroupSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5C4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawCurrencyGroupSizes() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5CC))(this);
	}
	template <typename T = int32_t> T get_CurrencyNegativePattern() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5D4))(this);
	}
	template <typename T = int32_t> T get_CurrencyPositivePattern() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5DC))(this);
	}
	template <typename T = Il2CppString*> T get_CurrencySymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB5E4))(this);
	}
	template <typename T = uintptr_t> static T get_CurrentInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FDB5EC))(0);
	}
	template <typename T = uintptr_t> static T get_InvariantInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD6428))(0);
	}
	template <typename T = Il2CppString*> T get_NaNSymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB7E4))(this);
	}
	template <typename T = Il2CppString*> T get_NegativeInfinitySymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB7EC))(this);
	}
	template <typename T = Il2CppString*> T get_NegativeSign() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB7F4))(this);
	}
	template <typename T = int32_t> T get_NumberDecimalDigits() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB7FC))(this);
	}
	template <typename T = Il2CppString*> T get_NumberDecimalSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB804))(this);
	}
	template <typename T = Il2CppString*> T get_NumberGroupSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB80C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawNumberGroupSizes() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB814))(this);
	}
	template <typename T = int32_t> T get_NumberNegativePattern() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB81C))(this);
	}
	template <typename T = void> T set_NumberNegativePattern(int32_t value) {
		return ((T (*)(NumberFormatInfo*, int32_t))(Il2CppBase() + 0x3FDB6CC))(this, value);
	}
	template <typename T = int32_t> T get_PercentDecimalDigits() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB824))(this);
	}
	template <typename T = Il2CppString*> T get_PercentDecimalSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB82C))(this);
	}
	template <typename T = Il2CppString*> T get_PercentGroupSeparator() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB834))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RawPercentGroupSizes() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB83C))(this);
	}
	template <typename T = int32_t> T get_PercentNegativePattern() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB844))(this);
	}
	template <typename T = int32_t> T get_PercentPositivePattern() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB84C))(this);
	}
	template <typename T = Il2CppString*> T get_PercentSymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB854))(this);
	}
	template <typename T = Il2CppString*> T get_PerMilleSymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB85C))(this);
	}
	template <typename T = Il2CppString*> T get_PositiveInfinitySymbol() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB864))(this);
	}
	template <typename T = Il2CppString*> T get_PositiveSign() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FDB86C))(this);
	}
	template <typename T = uintptr_t> T GetFormat(uintptr_t formatType) {
		return ((T (*)(NumberFormatInfo*, uintptr_t))(Il2CppBase() + 0x3FDB874))(this, formatType);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(NumberFormatInfo*))(Il2CppBase() + 0x3FD4FC8))(this);
	}
	template <typename T = uintptr_t> static T GetInstance(uintptr_t formatProvider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FDB948))(0, formatProvider);
	}

};

}
