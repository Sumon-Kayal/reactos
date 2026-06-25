#pragma once

static MUI_ENTRY bnBDSetupInitPageEntries[] =
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
        "ReactOS সেটাপ শুরু হওয়ার জন্য দয়া করে অপেক্ষা করুন",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        21,
        "এবং আপনার ডিভাইসগুলো অনুসন্ধান করছে...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "দয়া করে অপেক্ষা করুন...",
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

static MUI_ENTRY bnBDLanguagePageEntries[] =
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
        "ভাষা নির্বাচন (Language Selection)",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  ইনস্টলেশন প্রক্রিয়ার জন্য ব্যবহৃত ভাষাটি নির্বাচন করুন।",
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
        "\x07  এই ভাষাটিই সিস্টেমের ডিফল্ট ভাষা হিসেবে ব্যবহৃত হবে।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = চালিয়ে যান  F3 = প্রস্থান",
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

static MUI_ENTRY bnBDWelcomePageEntries[] =
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
        "ReactOS সেটাপে আপনাকে স্বাগতম",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "সেটাপের এই অংশটি আপনার কম্পিউটারে ReactOS অপারেটিং সিস্টেম কপি করে",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "এবং সেটাপের দ্বিতীয় অংশের জন্য কম্পিউটারকে প্রস্তুত করে।",
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
        "\x07  ReactOS ইনস্টলেশন মেরামত করতে R টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  লাইসেন্সিং শর্তাবলী দেখতে L টিপুন।",
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
        6,
        23,
        "ReactOS সম্পর্কে আরও তথ্যের জন্য ভিজিট করুন:",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        24,
        "https://reactos.org/",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = চালিয়ে যান  R = মেরামত  L = লাইসেন্স  F3 = প্রস্থান",
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

// ... (Continuing with the pattern for other pages)

static MUI_ENTRY bnBDQuitPageEntries[] =
{
    {
        4,
        3,
        " ReactOS " KERNEL_VERSION_STR " Setup ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        10,
        6,
        "ReactOS সম্পূর্ণভাবে ইনস্টল করা হয়নি।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        8,
        "Drive A: থেকে ফ্লপি ডিস্ক এবং",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        9,
        "ড্রাইভ থেকে সকল CD-ROM সরিয়ে ফেলুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        11,
        "কম্পিউটার রিবুট করতে ENTER টিপুন।",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "দয়া করে অপেক্ষা করুন...",
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

MUI_STRING bnBDStrings[] =
{
    {STRING_PLEASEWAIT,
     "   দয়া করে অপেক্ষা করুন..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = ইনস্টল  C = প্রাইমারি তৈরি  E = এক্সটেন্ডেড তৈরি  F3 = প্রস্থান"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = ইনস্টল  C = লজিক্যাল পার্টিশন তৈরি  F3 = প্রস্থান"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = ইনস্টল  D = পার্টিশন মুছুন  F3 = প্রস্থান"},
    {STRING_PARTITIONSIZE,
     "নতুন পার্টিশনের আকার:"},
    {STRING_CONTINUE,
    "ENTER = চালিয়ে যান"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = কম্পিউটার রিবুট করুন"},
    {STRING_COPYING,
     "   কপি হচ্ছে: %S"},
    {STRING_SETUPCOPYINGFILES,
     "সেটাপ ফাইল কপি করছে..."},
    {STRING_KB, "KB"},
    {STRING_MB, "MB"},
    {STRING_GB, "GB"},
    {0, 0}
};