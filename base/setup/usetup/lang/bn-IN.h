#pragma once

static MUI_ENTRY bnINSetupInitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        0,
        20,
        "ReactOS সেটআপ শুরু হওয়া পর্যন্ত অনুগ্রহ করে অপেক্ষা করুন",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        21,
        "এবং আপনার ডিভাইসগুলি অনুসন্ধান করা হচ্ছে...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "অনুগ্রহ করে অপেক্ষা করুন...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY bnINLanguagePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "ভাষা নির্বাচন",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  ইনস্টলেশন প্রক্রিয়ার জন্য অনুগ্রহ করে একটি ভাষা বেছে নিন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   তারপর ENTER টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  এই ভাষাটিই সিস্টেমের ডিফল্ট ভাষা হিসেবে নির্ধারিত হবে।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = এগিয়ে যান  F3 = বন্ধ করুন",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY bnINWelcomePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "ReactOS সেটআপে আপনাকে স্বাগত",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "সেটআপের এই অংশটি ReactOS অপারেটিং সিস্টেমটি আপনার কম্পিউটারে কপি করবে",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "এবং সেটআপের দ্বিতীয় অংশের জন্য প্রস্তুতি নেবে।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  ReactOS ইনস্টল বা আপগ্রেড করতে ENTER টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  ইনস্টলেশন মেরামত করতে R টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  লাইসেন্সের শর্তাবলী দেখতে L টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  ইনস্টল না করে বেরিয়ে যেতে F3 টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = এগিয়ে যান  R = মেরামত  L = লাইসেন্স  F3 = প্রস্থান",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY bnINDevicePageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "নীচের তালিকায় বর্তমান ডিভাইস সেটিংস দেখানো হয়েছে।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        24,
        11,
        "কম্পিউটার:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        12,
        "ডিসপ্লে:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        13,
        "কীবোর্ড:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        14,
        "কীবোর্ড লেআউট:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        16,
        "স্বীকার করুন:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        25,
        16, "এই ডিভাইস সেটিংস গ্রহণ করুন",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = এগিয়ে যান   F3 = প্রস্থান",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

MUI_STRING bnINStrings[] =
{
    {STRING_PLEASEWAIT,
     "   অনুগ্রহ করে অপেক্ষা করুন..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = ইনস্টল  C = প্রাইমারি তৈরি  E = এক্সটেন্ডেড তৈরি  F3 = প্রস্থান"},
    {STRING_PARTITIONSIZE,
     "নতুন পার্টিশনের সাইজ:"},
    {STRING_CONTINUE,
    "ENTER = এগিয়ে যান"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = কম্পিউটার রিস্টার্ট করুন"},
    {STRING_COPYING,
     "   কপি করা হচ্ছে: %S"},
    {STRING_SETUPCOPYINGFILES,
     "সেটআপ ফাইল কপি করছে..."},
    {STRING_UNPSPACE,
    "পার্টিশন না করা জায়গা"},
    {STRING_KB, "KB"},
    {STRING_MB, "MB"},
    {STRING_GB, "GB"},
    {0, 0}
};